<?php
function test()
{
    $a = [];

    $b = [];

    $c = [
            'a' => 1,
         ];
}


class TestClass
{
    public $good = [
        'width' => '',
        'height' => '',
    ];

    private $_bad = [
        'width'  => '',
        'height' => ''
        ];


    public function test()
    {
        $truck = [
           'width' => '',
            'height' => '',
        ];

        $plane = [
           'width' => '',
            'height' => '',
        ];

        $car = [
            'width'  => '',
            'height' => '',
        ];

        $bus = [
            'width'  =>   '',
            'height' => ''
        ];

        $train = [
             TRUE,
            FALSE,
            'aaa'
        ];

        $inline = ['aaa', 'bbb', 'ccc',];
        $inline = ['aaa'];
        $inline = ['aaa'];

        $bigone = [
            'name'     => 'bigone',
            'children' => [
                '1a'  => 'child',
                '11b'  => 'child',
                '111c'      => 'child',
                'children'  => [
                    'child' => 'aaa',
                ],
            ],
            'short_name' => 'big'
        ];
    }

}//end class

$value = [ ];
$value = [  ];
$value = ['1'=>$one, '2'  =>  $two, '3'=> $three, '4' =>$four];
$value = ['1'=>$one];

if (in_array('1', ['1','2','3']) === TRUE) {
    $value = in_array('1', ['1'  ,   '2',     '3','4']);
}

$value = [
    '1' => TRUE,
    FALSE,
    '3' => 'aaa',];

$value = [
    '1' => TRUE,
    FALSE,
];

$value = [
    TRUE,
    '1' => FALSE,
];

$value = [1,
    2 ,
    3 ,
];

$value = [1 => $one,
        2 => $two ,
        3 => $three ,
];

$value = [
    'tag' => $tag,
    'space' => $this->_getIndentation($tag, $tagElement),
];

$expected = [
    [
        '1' => 1,
        '1' => 2,
    ],
];

$expected = [
    [
        '1' => 1,
        '1' => 2
    ]
];

// Space in second arg.
$args = [
    '"'.$this->id.'"',
    (int) $hasSessions,
];

// No errors.
$paths = [
    Init::ROOT_DIR.'/Systems' => 'Systems',
    Init::ROOT_DIR.'/Installer' => 'Systems',
];

$x = [
     ];

$x = ['test'
];
$x = ['test',
];
$x = ['name' => 'test',
];

$x = [
    $x,
];

$func = [
    $x,
    'get'.$x.'Replacement'
];

$array = [
    'input_one' => 'one',
    'inputTwo' => 'two',
    'input_3' => 3,
];

$array = [
    'input_one',
    'inputTwo',
    'input_3',
];

// Malformed
$foo = [1
, 2];

$listItems[$aliasPath] = ['itemContent' => implode('<br/>', $aliases)];

$listItems[$aliasPath] = [
    'itemContent' => implode('<br/>', $aliases)
];

$x =
     [
         $x,
         $y,
     ];

$x =
[
      $x,
      $y,
     ];

$x = [

    $x,
    $y,
];

$test = [
    'test' => TestFunction::blah(
        $value1,
        $value2
    ),
];

$c = ['a' => 1,];
$c->{$var}[ ] = 2;

$foo = ['[',']',':',"\n","\r"];
$bar = ['&#91;','&#93;','&#58;','&#10;','&#13;'];

function foo()
{
    return [$a, $b->screen];
}

$array = [
    'name' => 'contactSubject',
    'required' => TRUE,
    'validators' => [
        new \Zend\Validator\InArray(['haystack' => array_keys($aSubjects)]),
    ],
];

$var = [
    'ViewHelper',
    ['Foo'],
    'Errors',
];

$data = [
    'first',
    'second',
    'third',
    // Add more here
];

$data = [
    'first',
    'second',
    //'third',
];

$data = [
    'first',
    'second'
    //'third',
];

$foo = [
    $this->getViewName() . '.id' => 'value',
    $this->getViewName() . '.title' => 'value',
];

$foo = [
    $this->getViewName() . '.id',
    $this->getViewName() . '.title',
];

$weightings = [
    T_CLOSURE => 100,

    /*
        Conditions.
    */

    T_WHILE => 50,

    /*
        Operators and arithmetic.
    */

    T_BITWISE_AND => 8,

    T_BOOLEAN_AND => 5,

    /*
        Equality.
    */

    T_IS_GREATER_OR_EQUAL => 5,
];

foreach ([
        'foo'    => 'bar',
        'foobaz' => 'bazzy',
    ] as $key => $value) {
}

$ids = [
    '1', // Foo.
    '13', // Bar.
];

[
    'key1' => function($bar) {
        return $bar;
    },
    'key2' => function($foo) {
        return $foo;
    },
    'key3' => function($bar) {
        return $bar;
    }
];

[
    'key1' => [
        '1',
        '2',
    ]
];

$var = [
    'tab_template' => '
        <li>%s</li>',
    'panel_template' => '
        <div id="%s">
            %s
        </div>',
];

function test() : array
{
    return [];
}

$single = [
    'comma'
];

$single = [
    'key' => 'value'
];

$multi = [
    [
        'a', 'b'
    ], [
        'c', 'd'
    ]
];

$multi = [
    [
        'a' => 'a', 'b' => 'b'
    ], [
        'c' => 'c', 'd' => 'd'
    ]
];

$unaligned = [
    'foo' => 'bar',
    'keyless',
    'a' => 'b',
];

$aligned = [
    'foo' => 'bar',
    'keyless',
    'a'   => 'b',
];

$aligned = [
    'foo' => 'bar',
    'keyless',
    'a' => 'b',
    'c'   => 'd',
];

$aligned = [
    'foo'    => 'bar',
    'keyless',
    'a'      => 'b',
    'c'          => 'd',
];

$dontAlign = [
    'foo'=>'bar',
    'bazbaz' => 'qux',
];

$fields = [
    'id'    => ['type' => 'INT'],
    'value' => ['type' => 'VARCHAR']];

$foo = [    'a', 'b'     ];
$foo = ['a', 'b'];
$foo = [ 'a', 'b' ];
$bar = [ 'c' ];
$bar = [      'c'   ];
$bar = ['c'];

$arr = ['a', [
    'a' => 1,
    'b' => 2,
]];

$arr = ['a', foo(
    'a',
    'b'
)];

$arr = ['a', 'b' => function ($a, $b) {
    return $a + $b;
}];

$arr = ['a', [
    'a' => 1,
    'b' => 2, 'c' => 3
]];

$arr = [
    'a' => <<<EOT
a
a
EOT
,
    'b' => <<<EOT
b
b
EOT
];

$arr = [
    'a' => <<<'EOT'
a
a
EOT
,
    'b' => <<<'EOT'
b
b
EOT
];
