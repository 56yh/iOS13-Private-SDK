//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid
{
    NSString *_folderID;
}

- (id)_privacySafeDescription;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)URLWithAccount:(id)arg1;
- (id)_folderID;
@property(copy) NSString *folderID;
- (_Bool)mergeWithUserInfo:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;

@end

