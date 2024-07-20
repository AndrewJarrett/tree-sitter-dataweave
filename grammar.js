module.exports = grammar({
	name: "dataweave",

	rules: {
		source_file: $ => repeat($._expression),

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
