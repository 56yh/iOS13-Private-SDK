//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DDScannerResult, NSDictionary, NSString;

@protocol DDParsecServiceVCInterface
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)setDDViewScale:(double)arg1;
- (void)setDDViewStyle:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setSheetMode:(_Bool)arg1;
- (void)setPreviewMode:(_Bool)arg1;
- (void)startQueryWithResult:(DDScannerResult *)arg1 context:(NSDictionary *)arg2;
- (void)startQueryWithString:(NSString *)arg1 range:(struct _NSRange)arg2;
@end

