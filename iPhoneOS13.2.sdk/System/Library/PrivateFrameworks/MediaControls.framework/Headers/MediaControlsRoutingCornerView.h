//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingCornerView : CCUICAPackageView
{
    _Bool _routesAvailable;
    _Bool _routing;
    long long _deviceType;
}

@property(nonatomic, getter=isRouting) _Bool routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) _Bool routesAvailable; // @synthesize routesAvailable=_routesAvailable;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (void)_updateGlyph;
- (id)initWithFrame:(struct CGRect)arg1;

@end

