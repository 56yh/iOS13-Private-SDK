//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView
{
}

- (void)drawRect:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (_Bool)shouldFlipForRTL;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) HFTemperatureIconDescriptor *iconDescriptor; // @dynamic iconDescriptor;

@end

