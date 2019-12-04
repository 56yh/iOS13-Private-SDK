//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSYChange-Protocol.h>

@class NSArray, NSString;

@interface VCIntentDefinitionChange : NSObject <VCSYChange>
{
    NSString *_objectIdentifier;
    long long _changeType;
    NSString *_checksum;
    NSArray *_files;
}

+ (int)messageType;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;
- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, copy) NSString *description;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)initWithApplicationProxy:(id)arg1 changeType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

