//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSObject, NSString;
@protocol OS_os_log;

@protocol STKAlertSessionResponseProvider 
@property(readonly, nonatomic) _Bool hasSentResponse;
@property(readonly, nonatomic) NSObject<OS_os_log> *logger;
- (void)sendResponse:(long long)arg1 withStringResult:(NSString *)arg2;
- (void)sendResponse:(long long)arg1;

@optional
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(_Bool)arg2;
@end

