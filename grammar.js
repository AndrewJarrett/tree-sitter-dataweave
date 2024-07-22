module.exports = grammar({
	name: "dataweave",

  //extras: $ => [
  //  $.comment
  //],

  word: $ => $.identifier,

  precedences: $ => [
    ['datetime', 'localdatetime', 'time', 'localtime', 'timezone', 'identifier'],
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
			$.identifier,
      $._primitive,
      $._date_types,
			$.comment
			// TODO: handle more expressions
		),

    _primitive: $ => choice(
      $.object,
      $.array,
			$._number,
      $.string,
      $.bool,
    ),

    object: $ => seq('{', optional($._object_members), '}'),
    _object_members: $ => choice(
      $._pair,
      seq($._pair, ',', $._object_members)
    ),
    _pair: $ => seq($.key, ':', $.value),
    key: $ => $.identifier,
    value: $ => $._primitive,

    array: $ => seq('[', optional($._array_members), ']'),
    _array_members: $ => choice(
      $._primitive,
      seq($._primitive, ',', $._array_members)
    ),

		identifier: $ => /[a-zA-Z_]\w*/,

		_number: $ => seq(optional('-'), choice($.int, $.float)),
    int: $ => /\d+/,
    float: $ => seq(/\d+/, '.', /\d*/),

    string: $ => choice(
      /"[^"]*"/, // TODO: handle escaped quotes inside string
      /'[^']*'/
    ),

    bool: $ => choice('true', 'false'),

    // https://docs.mulesoft.com/dataweave/latest/dataweave-types#dw_type_dates
    _date_types: $ => seq('|', choice(
      $.date,
      $.datetime,
      $.localdatetime,
      $.localtime,
      $.period,
      $.time,
      $.timezone
    ), '|'),

    date: $ => $._date,
    _date: _ => /\d{4}-\d{2}-\d{2}/,

    datetime: $ => seq($._date, 'T', $._localtime, $._timezone),

    localdatetime: $ => seq($._localdatetime, optional('Z')),
    _localdatetime: $ => seq($._date, 'T', $._localtime),

    localtime: $ => seq($._localtime, optional('Z')),
    _localtime: $ => seq(
      /\d{2}:\d{2}:\d{2}/,
      optional(seq('.', /\d{3}/)) // Milliseconds (optional)
    ),

    period: $ => seq('P',
      optional(seq(/\d+/, 'Y')),
      optional(seq(/\d+/, 'M')),
      optional(seq(/\d+/, 'D')),
      optional(seq('T',
        optional(seq(/\d+/, 'H')),
        optional(seq(/\d+/, 'M')),
        optional(seq(/\d+/, 'S')),
      ))
    ),

    time: $ => seq($._localtime, $._timezone),
    timezone: $ => $._timezone,
    _timezone: _ => seq(/[+-]\d{2}/, optional(':'), /\d{2}/),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: $ => token(choice(
			seq('//', /[^\r\n]*/),
			seq('/*', /[^\*]*\*+([^/*][^*]*\*+)*/, '/')
		))
	}
});
