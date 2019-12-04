//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, CROrderedSet, NSUUID;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument
{
    NSUUID *_replica;
    CROrderedSet *_orderedSet;
    CRDocument *_document;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(readonly) CRDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) CROrderedSet *orderedSet; // @synthesize orderedSet=_orderedSet;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1;

@end

