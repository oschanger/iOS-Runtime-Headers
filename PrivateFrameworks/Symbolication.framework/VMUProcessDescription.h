/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSCalendarDate;

@interface VMUProcessDescription : NSObject {
    struct _CSTypeRef { 
        NSUInteger _opaque_1; 
        NSUInteger _opaque_2; 
    NSDictionary *_binaryImageHints;
    BOOL _binaryImagePostProcessingComplete;
    NSMutableArray *_binaryImages;
    NSDictionary *_buildVersionDictionary;
    NSInteger _cpuType;
    NSCalendarDate *_date;
    unsigned long long _executableLoadAddress;
    NSString *_executablePath;
    BOOL _executablePathNeedsCorrection;
    NSString *_internalError;
    BOOL _is64Bit;
    BOOL _isNative;
    NSDictionary *_lsApplicationInformation;
    NSDictionary *_osVersionDictionary;
    NSString *_parentExecutablePath;
    NSString *_parentProcessName;
    NSInteger _pid;
    NSInteger _ppid;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSArray *_sortedBinaryImages;
    } _symbolicator;
    NSUInteger _task;
    NSArray *_unreadableBinaryImagePaths;
}

- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)_bundleLock;
- (id)_cpuTypeDescription;
- (void)_extractBinaryImageInfoFromSymbolOwner:(struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })arg1;
- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })arg1 withNonContiguousMemory:(id)arg2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })arg1 withNonContiguousMemory:(id)arg2;
- (id)_osVersionDictionary;
- (id)_readDataFromMemory:(id)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long)arg3;
- (id)_sanitizeVersion:(id)arg1;
- (id)_systemVersionDescription;
- (id)binaryImageDictionaryForAddress:(NSUInteger)arg1;
- (id)binaryImages;
- (id)binaryImagesDescription;
- (id)bundleIdentifier;
- (NSInteger)cpuType;
- (id)date;
- (id)dateAndVersionDescription;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)executablePath;
- (id)initWithPid:(NSInteger)arg1 orTask:(NSUInteger)arg2;
- (BOOL)isAppleApplication;
- (BOOL)isTranslated;
- (id)parentProcessName;
- (NSInteger)pid;
- (id)processDescriptionHeader;
- (id)processIdentifier;
- (id)processName;
- (id)processVersion;
- (id)processVersionDictionary;
- (NSUInteger)task;

@end
