#include <stdio.h>
#include <stdlib.h>

#define RAW_TYPE float
#define RAW_SPAN 3
#define PRINTF_STR "%20.10f "

void raw2pts( FILE *ifp, FILE *ofp );

int main ( int argc, char **argv )
{
    if ( argc < 3 ) {
        fprintf( stderr,  
                 "Syntax:\n"
                 "    %s <raw image file> <point cloud file>\n",
                 argv[0] );
        return -1;
    }

    FILE *ifp = fopen( argv[1], "rb" );
    FILE *ofp = fopen( argv[2], "w" );
    raw2pts( ifp, ofp );
    fclose( ifp );
    fclose( ofp );

    return 0;
}


void raw2pts( FILE *ifp, FILE *ofp )
{
    fseek( ifp, 0, SEEK_END );
    size_t len = ftell( ifp );
    len /= ( RAW_SPAN * sizeof( RAW_TYPE ) );
    fseek( ifp, 0, SEEK_SET );

    RAW_TYPE buf[RAW_SPAN];

    int i = 0;
    for ( i = 0; i < len; ++i ) {
        fread( buf, sizeof( RAW_TYPE ), RAW_SPAN, ifp );
        for ( int j = 0; j < RAW_SPAN; ++j ) {
            fprintf( ofp, PRINTF_STR, buf[j] );
        }
        fprintf( ofp, "\n" );
    }
    
    fprintf( stdout, "--Parsed %d points.\n", len ); 
}
