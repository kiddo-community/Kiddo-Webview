
#import "Command.h"
@protocol ClipboardExports <JSExport>
JSExportAs(copy, - (void) copy:(NSString*)text);
- (NSString *) paste;
@end

@interface Clipboard : Command <ClipboardExports>

@end
