/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {
    NSInteger _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property(copy) ISPropertyListProvider *propertyListDataProvider;
@property NSInteger outputType;

- (void)dealloc;
- (NSInteger)outputType;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)propertyListDataProvider;
- (void)setOutputType:(NSInteger)arg1;
- (void)setPropertyListDataProvider:(id)arg1;

@end
