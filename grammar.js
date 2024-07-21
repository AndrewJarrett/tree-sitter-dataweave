module.exports = grammar({
	name: "dataweave",

  //extras: $ => [
  //  $.comment
  //],

  word: $ => $.identifier,

	rules: {
		source_file: $ => seq(
      optional(seq($.header, $.separator)),
      $.script
    ),

    header: $ => seq(
      "%dw", $.version,
      $._header_keyword
    ),
    version: $ => choice("1.0", "2.0"),
    _header_keyword: $ => choice($.output, $.input),
    output: $ => seq('output', $.mime_type),
    input: $ => seq('input', $.mime_type),

    mime_type: $ => seq(choice(
      'text',
      'audio',
      'video',
      'application',
      'multipart',
      'image'
    ), '/', /[\w+-]+/),

    separator: $ => '---',

		script: $ => repeat1($._expression),

		_expression: $ => choice(
      $.object,
			$.identifier,
			$._number,
      $.string,
			$.comment
			// TODO: handle more expressions
		),

    object: $ => seq('{', $._members, '}'),
    _members: $ => choice(
      $._pair,
      seq($._pair, ',', $._members)
    ),
    _pair: $ => seq($.key, ':', $.value),
    key: $ => seq($.identifier),
    value: $ => seq($._expression),

		identifier: $ => /[a-zA-Z_]\w*/,

		_number: $ => choice($.int, $.float),
    int: $ => /\d+/,
    float: $ => seq(/\d+/, '.', /\d*/),

    string: $ => choice(
      /"[^"]*"/, // TODO: handle escaped quotes inside string
      /'[^']*'/
    ),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: $ => token(choice(
			seq('//', /[^\r\n]*/),
			seq('/*', /[^\*]*\*+([^/*][^*]*\*+)*/, '/')
		))
	}
});
