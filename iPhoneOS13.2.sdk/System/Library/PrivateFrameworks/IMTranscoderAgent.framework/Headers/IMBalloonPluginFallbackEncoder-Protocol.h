//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSURL;

@protocol IMBalloonPluginFallbackEncoder 

@optional
- (void)fullQualityForData:(NSData *)arg1 attachments:(NSArray *)arg2 inFileURL:(NSURL *)arg3 completionBlock:(void (^)(NSArray *, NSError *, _Bool, unsigned long long))arg4;
- (void)fullQualityForData:(NSData *)arg1 inFileURL:(NSURL *)arg2 completionBlock:(void (^)(NSArray *, NSError *, _Bool, _Bool))arg3;
- (void)fallbackForData:(NSData *)arg1 attachments:(NSArray *)arg2 inFileURL:(NSURL *)arg3 completionBlockWithText:(void (^)(NSArray *, NSString *, NSError *, _Bool, _Bool))arg4;
- (void)fallbackForData:(NSData *)arg1 inFileURL:(NSURL *)arg2 completionBlock:(void (^)(NSArray *, NSError *, _Bool, _Bool))arg3;
@end

