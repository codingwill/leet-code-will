<h2><a href="https://leetcode.com/problems/split-a-string-in-balanced-strings/">1221. Split a String in Balanced Strings</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><strong style="user-select: auto;">Balanced</strong> strings are those that have an equal quantity of <code style="user-select: auto;">'L'</code> and <code style="user-select: auto;">'R'</code> characters.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">balanced</strong> string <code style="user-select: auto;">s</code>, split it into some number of substrings such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Each substring is balanced.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of balanced strings you can obtain.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "RLRRLLRLRL"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "RLRRRLLRLL"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> s can be split into "RL", "RRRLLRLL", each substring contains same number of 'L' and 'R'.
Note that s cannot be split into "RL", "RR", "RL", "LR", "LL", because the 2<sup style="user-select: auto;">nd</sup> and 5<sup style="user-select: auto;">th</sup> substrings are not balanced.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "LLLLRRRR"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> s can be split into "LLLLRRRR".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'L'</code> or <code style="user-select: auto;">'R'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">balanced</strong> string.</li>
</ul>
</div>