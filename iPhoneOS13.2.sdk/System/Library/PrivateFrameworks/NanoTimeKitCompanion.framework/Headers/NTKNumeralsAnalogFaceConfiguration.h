//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice;

@interface NTKNumeralsAnalogFaceConfiguration : NSObject
{
    _Bool _areAllComplicationsOff;
    unsigned long long _faceColor;
    unsigned long long _colorSchemeUnits;
    unsigned long long _selectedStyle;
    long long _utilitySlot;
    CLKDevice *_device;
}

@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long utilitySlot; // @synthesize utilitySlot=_utilitySlot;
@property(readonly, nonatomic) _Bool areAllComplicationsOff; // @synthesize areAllComplicationsOff=_areAllComplicationsOff;
@property(readonly, nonatomic) unsigned long long selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(readonly, nonatomic) unsigned long long colorSchemeUnits; // @synthesize colorSchemeUnits=_colorSchemeUnits;
@property(readonly, nonatomic) unsigned long long faceColor; // @synthesize faceColor=_faceColor;
- (id)initWithFaceColor:(unsigned long long)arg1 colorSchemeUnits:(unsigned long long)arg2 areAllComplicationsOff:(_Bool)arg3 utilitySlot:(long long)arg4 selectedStyle:(unsigned long long)arg5 forDevice:(id)arg6;

@end

