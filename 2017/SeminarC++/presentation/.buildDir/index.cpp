<!doctype html>
<html>
	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
		<meta name="apple-mobile-web-app-capable" content="yes">

		<title>Presentation</title>
        <style>
            strong {
                color: orangered
            }
        </style>

		<meta name="description" content="Function Graphics">
		<meta name="author" content="Alex Tsvetanov">

<!--
		<link href="../../../BASE/reveal.js/css/impress-demo.css" rel="stylesheet">
-->
<!--		<link rel="apple-touch-icon" href="/apple-touch-icon.png"><link rel="shortcut icon" href="/favicon.png">-->


		<link rel="stylesheet" href="../../../BASE/reveal.js/css/reveal.css">
		<link rel="stylesheet" href="../../../BASE/reveal.js/css/theme/black.css">

		<!-- Theme used for syntax highlighting of code -->
		<link rel="stylesheet" href="../../../BASE/reveal.js/lib/css/zenburn.css">

		<!-- Printing and PDF exports -->
		<script>
			var link = document.createElement( 'link' );
			link.rel = 'stylesheet';
			link.type = 'text/css';
			link.href = window.location.search.match( /print-pdf/gi ) ? '../../../BASE/reveal.js/css/print/pdf.css' : '../../../BASE/reveal.js/css/print/paper.css';
			document.getElementsByTagName( 'head' )[0].appendChild( link );
		</script>

		<link href="../../../BASE/reveal.js/css/template.css" rel="stylesheet" />
	</head>
	<body>
		<div class="reveal">
			<div class="slides">
				<section>
					<div class="head">
						<div class="logo"></div><div class="title">C++ in 2017</div>
					</div>
					<div class="titlepage_body">
						<center>
							History, standarts (differences) and a lot of practices
						</center>
						<br>
						<img height="500px" src="c11.jpg" />
						<img src="../../../BASE/wizard.png" style="float: right; position:fixed; top: 290px; right: 10px;" />
					</div>
					<div class="foot">	
						<div class="bottom">
							<div class="author">Alex Tsvetanov, Dimo Chanev</div>
							<div class="organization">Students in SHSM</div>
						</div>
						
						<div class="number"> </div>
						<div class="follow"> </div>
					</div>
					<aside class="notes">
						Dimo
					</aside>
				</section>
				<section>
					<section>
						<div class="head">
							<div class="logo"></div><div class="title">Table of Content</div>
						</div>
						<div class="body">
							<ul style="float: left;">
								<li>History</li>
								<li>Developing in C++</li>
								<li>Standarts 
									<ul>
										<li>C++98</li>
										<li>C++03</li>
										<li>C++TR1</li>
										<li>C++11</li>
										<li>C++14</li>
										<li>C++17 (1z, not ready)</li>
										<li>C++20</li>
									</ul>
								</li>
								<li>Compilers &amp; IDEs</li>
							</ul>
							<img style="position:fixed; top: 20%; right: 0%;background-color: white;" src="./img1.png" width="50%" />
						</div>
						<div class="foot">	
							<div class="bottom"> </div>
							<div class="number"> </div>
							<div class="follow"> </div>
						</div>
					</section>
					<section>
						<div class="head">
							<div class="logo"></div><div class="title">Table of Content</div>
						</div>
						<div class="body">
							<!--<ul style="float: right; border-right: 40px solid rgba(0,0,0,0);">-->
							<ul>
								<li>
									Classes, Inheritance, Abstract Classes
								</li>
								<li>
									Templates
								</li>
								<li>
									<em>extern</em>
								</li>
				//				<li>
				//					Rvalues
				//				</li>
								<li>
									<em>constexpr</em>
								</li>
								<li>
									Initializer lists
								</li>
                                <li>
                                    Uniform initialization
                                </li>
								<li>
									<em>auto/decltype</em>
								</li>
								<li>
									Range-based <em>for</em> loop
								</li>
								<li>
									<em>Lambda</em> expressions
								</li>
								<li>
									<em>Null pointer</em>
								</li>
								<li>
									enumerations
								</li>
								<li>
									<em>typedef/using</em>
								</li>
								<li>
									Literals
								</li>
								<li>
									Digit separators
								</li>
								<li>
									Attributes
								</li>
								<li>
									new in STL
								</li>
							</ul>
                            <img src="img/contents.png"/>
						</div>
						<div class="foot">	
							<div class="bottom"> </div>
							<div class="number"> </div>
							<div class="follow"> </div>
						</div>
						<aside class="notes">
							Alex	
						</aside>
					</section>
				</section>
				#include "history.html"
				#include "develop.html"
				#include "class.html"
				#include "tempaltes.html"
				#include "extern.html"
				//#include "values.html"
				#include "constexpr.html"
                #include "inil.html"
                #include "uniinit.html"
				#include "auto.html"
				#include "forloop.html"
				#include "lambda.html"
				#include "nullptr.html"
				#include "enum.html"
				#include "using.html"
                #include "literals.html"
				#include "digsep.html"
				#include "stl.html"
				#include "ide.html"
				#include "resource.html"
				#include "question.html"
				//#include "experimental.html"
				//#include "question.html"
			</div>
		</div>

		<script src="../../../BASE/reveal.js/lib/js/head.min.js"></script>
		<script src="../../../BASE/reveal.js/js/reveal.js"></script>

		<script>
			// More info https://github.com/hakimel/reveal.js#configuration
			Reveal.initialize({
				history: true,

				// More info https://github.com/hakimel/reveal.js#dependencies
				dependencies: [
					{ src: '../../../BASE/reveal.js/plugin/zoom-js/zoom.js', async: true },
					{ src: '../../../BASE/reveal.js/plugin/markdown/marked.js' },
					{ src: '../../../BASE/reveal.js/plugin/markdown/markdown.js' },
					{ src: '../../../BASE/reveal.js/plugin/notes/notes.js', async: true },
					{ src: '../../../BASE/reveal.js/plugin/highlight/highlight.js', async: true, callback: function() { hljs.initHighlightingOnLoad(); } }
				]
			});
			Reveal.configure({ backgroundTransition: 'none' })
		</script>
		<script src="../../../BASE/reveal.js/init.js"></script>
	</body>
</html>
