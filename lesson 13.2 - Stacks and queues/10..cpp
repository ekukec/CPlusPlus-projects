void Stack::push(char the_symbol)
{
	StackFramePtr new_el;
	
	new_el = new StackFrame;
	
	new_el->link = top;
	new_el->data = the_symbol;
	
	top = new_el;
}
