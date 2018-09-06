#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    NSString *message = @"";
    NSString *arg1;

    if (argc > 2) {
        if (argv[2] == "Classic") {
            NSFileHandle *standardOutput = [NSFileHandle fileHandleWithStandardOutput];
            arg1 = [NSString stringWithUTF8String:argv[1]];
            message = @"Hello, ";
            message = [message stringByAppendingString:arg1];
            message = [message stringByAppendingString:@"!\n"];
            [standardOutput writeData:[message dataUsingEncoding:NSUTF8StringEncoding]];
        }
        else {
            message = @"Hello, ";
            message = [message stringByAppendingString:arg1];
            message = [message stringByAppendingString:@"!"];
            NSLog (message);
        }
    }
    else if (argc > 1) {
        arg1 = [NSString stringWithUTF8String:argv[1]];
        message = @"Hello, ";
        message = [message stringByAppendingString:arg1];
        message = [message stringByAppendingString:@"!"];
        NSLog (message);
    }
    else {
        NSLog (@"Hello World!");
    }

    [pool drain];
    return 0;
}