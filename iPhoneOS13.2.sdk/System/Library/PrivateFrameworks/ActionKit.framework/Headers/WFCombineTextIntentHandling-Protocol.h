//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WFCombineTextIntent;

@protocol WFCombineTextIntentHandling 
- (void)resolveCustomSeparatorForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveSeparatorForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(WFCombineTextSeparatorResolutionResult *))arg2;
- (void)resolveTextForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleCombineText:(WFCombineTextIntent *)arg1 completion:(void (^)(WFCombineTextIntentResponse *))arg2;

@optional
- (void)confirmCombineText:(WFCombineTextIntent *)arg1 completion:(void (^)(WFCombineTextIntentResponse *))arg2;
@end

