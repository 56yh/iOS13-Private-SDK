//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying>
{
    NSUUID *_UUID;
}

+ (id)presetifyAdjustment:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)settingsDictionary;
- (void)setUUID:(id)arg1;
- (id)UUID;
- (id)autoIdentifier;
- (id)identifier;
- (BOOL)isEqualToOperation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)archivalRepresentation;

@end

