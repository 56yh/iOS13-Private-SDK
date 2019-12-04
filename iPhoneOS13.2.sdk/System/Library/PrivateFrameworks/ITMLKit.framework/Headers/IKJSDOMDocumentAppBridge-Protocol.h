//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IKDOMDocument, NSArray, NSDictionary, NSString;

@protocol IKJSDOMDocumentAppBridge 
- (void)updateForDocument:(IKDOMDocument *)arg1;

@optional
- (void)runTestWithName:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)recordedImpressionsMatching:(NSString *)arg1 reset:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
- (void)recordedImpressions:(_Bool)arg1 completion:(void (^)(NSArray *))arg2;
- (NSArray *)impressionsMatching:(NSString *)arg1 reset:(_Bool)arg2;
- (NSArray *)recordedImpressions:(_Bool)arg1;
- (NSArray *)recordedImpressions;
- (NSArray *)snapshotImpressions;
- (void)setNeedsUpdateForDocument:(IKDOMDocument *)arg1;
@end

