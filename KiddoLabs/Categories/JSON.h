

@interface NSArray (MGJSON)
- (NSString*)JSONString;
@end

@interface NSDictionary (MGJSON)
- (NSString*)JSONString;
@end

@interface NSString (MGJSON)
- (id)JSONObject;
@end
