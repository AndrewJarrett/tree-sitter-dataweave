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
			$.number,
      $.string,
			$.comment
			// TODO: handle more expressions
		),

    object: $ => seq('{', repeat($._pair), $._last_pair, '}'),
    _pair: $ => seq($.key, $.value, ','),
    _last_pair: $ => seq($.key, $.value),
    key: $ => seq($.identifier, ':'),
    value: $ => seq($._expression, ','),

		identifier: $ => /[a-zA-Z_]\w*/,
		number: $ => /\d+/,
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
