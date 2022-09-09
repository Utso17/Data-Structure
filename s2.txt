bool IsEmpty( void ){
	return (Top == 0);

bool IsFull( void ){
	return ( Top == MaxSize );

bool TopElement( int &Element ){
	if( IsEmpty() )
        { cout << "Stack empty\n";
        return false; }
        Element = Stack[ Top - 1 ];
        return true;
}

void Show( void ){
	if( IsEmpty() )
        { cout << "Stack empty\n";
        return; }
        for( int i=Top-1; i>=0; i-- )
        cout << Stack[i] << endl; 
}
bool Push( const int Element ){
	if( IsFull( ) )
        { cout << "Stack is Full\n"; 
        return false; } 
        Stack[ Top++ ] = Element;
	    return true;
}

bool Pop( int &Element ){
	if( IsEmpty() )
        { cout << "Stack empty\n"; return false; }
        Element = Stack[ --Top ];
        return true;
}
