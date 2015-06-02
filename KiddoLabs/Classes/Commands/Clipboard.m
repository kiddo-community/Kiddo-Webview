
#import "Clipboard.h"

@implementation Clipboard

- (void) copy:(NSString*)text {
    [[NSPasteboard generalPasteboard] clearContents];
    [[NSPasteboard generalPasteboard] setString:text  forType:NSStringPboardType];
}

- (NSString *) paste {
    NSPasteboard *pasteboard = [NSPasteboard generalPasteboard];
    NSArray *classArray = [NSArray arrayWithObject:[NSString class]];
    NSDictionary *options = [NSDictionary dictionary];
    BOOL ok = [pasteboard canReadObjectForClasses:classArray options:options];
    if (ok) {
        NSArray *objectsToPaste = [pasteboard readObjectsForClasses:classArray options:options];
        return (NSString *) [objectsToPaste objectAtIndex:0];
    }
    return @"";
}

@end
