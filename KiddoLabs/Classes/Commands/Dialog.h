

#import <Foundation/Foundation.h>
#import "Command.h"
#import <JavaScriptCore/JavaScriptCore.h>

@protocol DialogExports <JSExport>
- (void) openDialog:(JSValue *)args;
- (void) saveDialog: (JSValue*)args;
@end

@interface Dialog : Command <DialogExports>

@property (assign) JSContext* context;

@end
