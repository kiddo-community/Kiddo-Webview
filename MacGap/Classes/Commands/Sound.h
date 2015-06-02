
#import "Command.h"

@protocol SoundExports <JSExport>
JSExportAs(play, - (void) play:(NSString*)file onComplete:(JSValue*)callback);
JSExportAs(playSystem, - (void) playSystem:(NSString*)name onComplete:(JSValue*)callback);
@property (retain) JSValue* cb;
@end

@interface Sound : Command <SoundExports, NSSoundDelegate>

@end
