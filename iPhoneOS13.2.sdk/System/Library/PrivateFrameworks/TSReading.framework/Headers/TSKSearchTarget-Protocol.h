//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString;

@protocol TSKSearchTarget 

@optional
- (void)layoutSearchForSpellingErrorsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1 stop:(_Bool *)arg2;
- (void)layoutSearchForAnnotationWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (NSArray *)childAnnotationSearchTargets;
- (NSArray *)childSearchTargets;
- (void)layoutSearchForString:(NSString *)arg1 options:(unsigned long long)arg2 hitBlock:(void (^)(id <TSKSearchReference>))arg3;
@end

