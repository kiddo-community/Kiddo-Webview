
#import <Foundation/Foundation.h>
#import "Command.h"


@protocol DockExports <JSExport>

@property (readonly) NSString* badge;
- (void) addBadge: (NSString*) badge;
- (void) removeBadge;
@end

@interface Dock : Command <DockExports>


@end
