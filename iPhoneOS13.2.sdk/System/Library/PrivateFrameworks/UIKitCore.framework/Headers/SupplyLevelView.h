//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SupplyLevelView : UIView
{
    int supplyLevel;
    NSArray *colors;
}

@property(retain, nonatomic) NSArray *colors; // @synthesize colors;
@property(nonatomic) int supplyLevel; // @synthesize supplyLevel;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isOpaque;

@end

