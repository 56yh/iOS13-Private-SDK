//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXCuratedLibraryLayoutSpec;

@protocol PXCuratedLibraryBodyLayout <NSObject>
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec;
- (NSArray * (^)(NSUInteger))locationNamesFutureForContentInRect:(CGRect)arg1;
- (NSDateInterval * (^)(NSUInteger))dateIntervalFutureForContentInRect:(CGRect)arg1;
@end

