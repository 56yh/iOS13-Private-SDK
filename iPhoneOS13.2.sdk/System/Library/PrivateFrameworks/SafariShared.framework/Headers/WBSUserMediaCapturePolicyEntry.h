//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WBSUserMediaCapturePolicyEntry : NSObject
{
    double _permissionExpirationDate;
    double _permissionGrantDate;
    NSString *_origin;
    NSString *_topLevelOrigin;
    NSString *_persistentSalt;
    unsigned long long _permission;
    NSMutableDictionary *_ephemeralSalts;
}

@property(retain, nonatomic) NSMutableDictionary *ephemeralSalts; // @synthesize ephemeralSalts=_ephemeralSalts;
@property(nonatomic) unsigned long long permission; // @synthesize permission=_permission;
@property(retain, nonatomic) NSString *persistentSalt; // @synthesize persistentSalt=_persistentSalt;
@property(retain, nonatomic) NSString *topLevelOrigin; // @synthesize topLevelOrigin=_topLevelOrigin;
@property(retain, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(nonatomic) double permissionGrantDate; // @synthesize permissionGrantDate=_permissionGrantDate;
@property(nonatomic) double permissionExpirationDate; // @synthesize permissionExpirationDate=_permissionExpirationDate;
- (unsigned long long)_defaultUserMediaPermission;
- (_Bool)_isValidUserMediaPermission:(unsigned long long)arg1;
- (void)updatePermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2;
- (_Bool)permissionExpiresWithinOneDay;
- (_Bool)isValid;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;

@end

