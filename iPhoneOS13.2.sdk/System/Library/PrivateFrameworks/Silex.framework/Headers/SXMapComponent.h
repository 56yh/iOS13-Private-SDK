//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent
{
}

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;
+ (id)typeString;
- (unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessibilityCaption; // @dynamic accessibilityCaption;
@property(readonly, nonatomic) NSString *caption; // @dynamic caption;
@property(readonly, nonatomic) unsigned long long defaultMapType; // @dynamic defaultMapType;
@property(readonly, nonatomic) SXJSONArray *items; // @dynamic items;
@property(readonly, nonatomic) CDStruct_2b0c6e0b region; // @dynamic region;

@end

