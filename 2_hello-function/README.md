# Task #2

In this task, you have to print `"Hello, world!"` but instead of directly printing with `cout` object, you should return a string containing `"Hello, world!"` and the main program will use it as output.

## Brief explanation

### What the h\*ck is a Function?

Function is a piece of code that is well separated from the rest. It is mainly used to receive input and gives output according to the input itself.

Function is structured into few notable parts which can be seen in this syntax:

```c++

<return_type> <function_name> ([<argument1_type> <argument1_name>, <argument2_type> <argument2_name>, ...]) {
	// Body of function, whatever algorithm it contains.

	return <some_variable or value>
}

```

For example, the `hello_world` function in this task:

```c++
string hello_world() {
//	Return string containing "Hello, world!" sentence. 
// 	This function does not do the printing itself.

// 	YOUR CODE:
	return "";
}
```

You can see that the `return_type` for this function is a `string`. The function name is `hello_world`. It has no argument, hence the empty 
bracket. It returns a value that has `string` type.

### Ok. Now why would I use it in the first place?

The main purpose of using a function is that a function serves as piece of reusable code. Meaning that you can reuse anything your function do for how many times you'd like to. And you never have to copy-paste the algorithm again and again. Also, if somehow you need to change the algorithm, you can just modify the function instead of changing many pieces if you use the copy-paste method. 

This principle has a term in Software Engineering, that is "DRY", which is an abbreviation that stands for "Don't Repeat Yourself". So, keep your code always DRY. How to do it? Firstly you should consider yourself which part of the algorithm that will probably be reusable next time. Simple way to determine is if you are going to copy-paste some part of your codes, consider to extract it as a function instead.

Another reason is that if you use a function, even if it won't be reused in other place, you would probably still get the advantage of "having a bite-sized piece of code". Who doesn't like a cake that has the right mouth-sized? Long codes are source frustation and depression while bite-sized code are just a piece-of-mind.

Once written correctly, you can imagine a function as one black-box machine that will produce the right output given some inputs. There you go, one level of abstraction.
