//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, TIInputMode;

@protocol TIAssetManaging 
@property(copy, nonatomic) id /* block */ enabledInputModeIdentifiersProviderBlock;
- (NSArray *)enabledInputModes;
- (void)requestAssetDownloadForLanguage:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (NSArray *)assetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2;
@end

