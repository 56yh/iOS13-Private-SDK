//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary;

@protocol CKPickerBarView <NSObject>
@property(copy, nonatomic) NSArray *acknowledgmentViews;
- (void)performCancelAnimation:(void (^)(void))arg1;
- (void)performSendAnimation:(void (^)(void))arg1;
- (void)performSelectedAnimation:(void (^)(void))arg1;
- (void)performShowAnimation:(void (^)(void))arg1;
- (id)initWithGroupCounts:(NSDictionary *)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
@end

