module.exports = grammar({
	name: "dataweave",

  extras: $ => [
    $.comment
  ],

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
    _header_keyword: $ => choice(
      seq('output', $.mime_type),
      seq('input', $.mime_type)
    ),

    mime_type: $ => seq(choice(
      'text',
      'audio',
      'video',
      'application',
      'multipart',
      'image'
    ), '/', $.identifier),

    separator: $ => '---',

		script: $ => repeat1($._expression),

		_expression: $ => choice(
			$.identifier,
			$.number,
			$.comment
			// TODO: handle more expressions
		),

		identifier: $ => /[a-zA-Z_]\w*/,
		number: $ => /\d+/,

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: $ => token(choice(
			seq('//', /[^\r\n]*/),
			seq('/*', /[^\*]*\*+([^/*][^*]*\*+)*/, '/')
		))
	}
});
