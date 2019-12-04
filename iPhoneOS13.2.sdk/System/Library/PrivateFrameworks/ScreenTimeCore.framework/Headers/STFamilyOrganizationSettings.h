//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSData, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings
{
}

- (id)redactedDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)setPasscode:(id)arg1;
@property(nonatomic) _Bool isManaged; // @dynamic isManaged;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isDirty; // @dynamic isDirty;
@property(retain, nonatomic) STFamilyOrganization *organization; // @dynamic organization;
@property(nonatomic) _Bool shareWebUsage; // @dynamic shareWebUsage;
@property(copy, nonatomic) NSData *versionVector; // @dynamic versionVector;

@end

