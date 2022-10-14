<h2><a href="https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/">1237. Find Positive Integer Solution for a Given Equation</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a callable function <code style="user-select: auto;">f(x, y)</code> <strong style="user-select: auto;">with a hidden formula</strong> and a value <code style="user-select: auto;">z</code>, reverse engineer the formula and return <em style="user-select: auto;">all positive integer pairs </em><code style="user-select: auto;">x</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">y</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">f(x,y) == z</code>. You may return the pairs in any order.</p>

<p style="user-select: auto;">While the exact formula is hidden, the function is monotonically increasing, i.e.:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">f(x, y) &lt; f(x + 1, y)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">f(x, y) &lt; f(x, y + 1)</code></li>
</ul>

<p style="user-select: auto;">The function interface is defined like this:</p>

<pre style="user-select: auto;">interface CustomFunction {
public:
  // Returns some positive integer f(x, y) for two positive integers x and y based on a formula.
  int f(int x, int y);
};
</pre>

<p style="user-select: auto;">We will judge your solution as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The judge has a list of <code style="user-select: auto;">9</code> hidden implementations of <code style="user-select: auto;">CustomFunction</code>, along with a way to generate an <strong style="user-select: auto;">answer key</strong> of all valid pairs for a specific <code style="user-select: auto;">z</code>.</li>
	<li style="user-select: auto;">The judge will receive two inputs: a <code style="user-select: auto;">function_id</code> (to determine which implementation to test your code with), and the target <code style="user-select: auto;">z</code>.</li>
	<li style="user-select: auto;">The judge will call your <code style="user-select: auto;">findSolution</code> and compare your results with the <strong style="user-select: auto;">answer key</strong>.</li>
	<li style="user-select: auto;">If your results match the <strong style="user-select: auto;">answer key</strong>, your solution will be <code style="user-select: auto;">Accepted</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> function_id = 1, z = 5
<strong style="user-select: auto;">Output:</strong> [[1,4],[2,3],[3,2],[4,1]]
<strong style="user-select: auto;">Explanation:</strong> The hidden formula for function_id = 1 is f(x, y) = x + y.
The following positive integer values of x and y make f(x, y) equal to 5:
x=1, y=4 -&gt; f(1, 4) = 1 + 4 = 5.
x=2, y=3 -&gt; f(2, 3) = 2 + 3 = 5.
x=3, y=2 -&gt; f(3, 2) = 3 + 2 = 5.
x=4, y=1 -&gt; f(4, 1) = 4 + 1 = 5.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> function_id = 2, z = 5
<strong style="user-select: auto;">Output:</strong> [[1,5],[5,1]]
<strong style="user-select: auto;">Explanation:</strong> The hidden formula for function_id = 2 is f(x, y) = x * y.
The following positive integer values of x and y make f(x, y) equal to 5:
x=1, y=5 -&gt; f(1, 5) = 1 * 5 = 5.
x=5, y=1 -&gt; f(5, 1) = 5 * 1 = 5.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= function_id &lt;= 9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= z &lt;= 100</code></li>
	<li style="user-select: auto;">It is guaranteed that the solutions of <code style="user-select: auto;">f(x, y) == z</code> will be in the range <code style="user-select: auto;">1 &lt;= x, y &lt;= 1000</code>.</li>
	<li style="user-select: auto;">It is also guaranteed that <code style="user-select: auto;">f(x, y)</code> will fit in 32 bit signed integer if <code style="user-select: auto;">1 &lt;= x, y &lt;= 1000</code>.</li>
</ul>
</div>