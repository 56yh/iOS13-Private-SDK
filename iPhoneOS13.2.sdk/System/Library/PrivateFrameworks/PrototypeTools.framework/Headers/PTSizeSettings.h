//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings
{
    double _width;
    double _height;
}

+ (_Bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct CGSize sizeValue;
- (id)drillDownSummary;

@end
