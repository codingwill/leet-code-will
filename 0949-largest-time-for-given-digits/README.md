<h2><a href="https://leetcode.com/problems/largest-time-for-given-digits/">949. Largest Time for Given Digits</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">arr</code> of 4 digits, find the latest 24-hour time that can be made using each digit <strong style="user-select: auto;">exactly once</strong>.</p>

<p style="user-select: auto;">24-hour times are formatted as <code style="user-select: auto;">"HH:MM"</code>, where <code style="user-select: auto;">HH</code> is between <code style="user-select: auto;">00</code> and <code style="user-select: auto;">23</code>, and <code style="user-select: auto;">MM</code> is between <code style="user-select: auto;">00</code> and <code style="user-select: auto;">59</code>. The earliest 24-hour time is <code style="user-select: auto;">00:00</code>, and the latest is <code style="user-select: auto;">23:59</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the latest 24-hour time in <code style="user-select: auto;">"HH:MM"</code> format</em>. If no valid time can be made, return an empty string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> "23:41"
<strong style="user-select: auto;">Explanation:</strong> The valid 24-hour times are "12:34", "12:43", "13:24", "13:42", "14:23", "14:32", "21:34", "21:43", "23:14", and "23:41". Of these times, "23:41" is the latest.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [5,5,5,5]
<strong style="user-select: auto;">Output:</strong> ""
<strong style="user-select: auto;">Explanation:</strong> There are no valid 24-hour times as "55:55" is not valid.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">arr.length == 4</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 9</code></li>
</ul>
</div>