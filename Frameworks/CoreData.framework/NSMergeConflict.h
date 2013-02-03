/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergeConflict : NSObject {
    NSUInteger _newVersion;
    NSUInteger _oldVersion;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    id _source;
}

@property(retain,readonly) NSDictionary *cachedSnapshot;
@property(retain,readonly) NSDictionary *objectSnapshot;
@property(retain,readonly) NSDictionary *persistedSnapshot;
@property(retain,readonly) NSManagedObject *sourceObject;
@property(readonly) NSUInteger newVersionNumber;
@property(readonly) NSUInteger oldVersionNumber;

- (id)cachedSnapshot;
- (void)dealloc;
- (id)description;
- (id)initWithSource:(id)arg1 newVersion:(NSUInteger)arg2 oldVersion:(NSUInteger)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (NSUInteger)newVersionNumber;
- (id)objectForKey:(id)arg1;
- (id)objectSnapshot;
- (NSUInteger)oldVersionNumber;
- (id)persistedSnapshot;
- (id)sourceObject;
- (id)valueForKey:(id)arg1;

@end
