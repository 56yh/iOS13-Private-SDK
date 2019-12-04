//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PFAdjustment : NSObject
{
    _Bool _enabled;
    unsigned long long _formatVersion;
    NSString *_identifier;
    NSDictionary *_settings;
    NSString *_autoIdentifier;
    NSDictionary *_autoSettings;
    NSString *_maskUUID;
}

+ (_Bool)isValidArchiveDictionary:(id)arg1 errors:(id)arg2;
@property(readonly, nonatomic) NSString *maskUUID; // @synthesize maskUUID=_maskUUID;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSDictionary *autoSettings; // @synthesize autoSettings=_autoSettings;
@property(readonly, nonatomic) NSString *autoIdentifier; // @synthesize autoIdentifier=_autoIdentifier;
@property(readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long formatVersion; // @synthesize formatVersion=_formatVersion;
- (id)debugDescription;
- (id)description;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(_Bool)arg5 maskUUID:(id)arg6;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(_Bool)arg5;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(_Bool)arg3;
- (id)init;
- (id)archiveDictionary;
- (id)initWithArchiveDictionary:(id)arg1;

@end

