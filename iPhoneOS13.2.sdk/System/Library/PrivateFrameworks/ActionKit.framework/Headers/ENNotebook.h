//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class EDAMLinkedNotebook, EDAMNotebook, EDAMSharedNotebook, NSString;

@interface ENNotebook : NSObject <NSCoding>
{
    _Bool _isShared;
    _Bool _isDefaultNotebookOverride;
    EDAMNotebook *_notebook;
    EDAMLinkedNotebook *_linkedNotebook;
    EDAMSharedNotebook *_sharedNotebook;
}

@property(nonatomic) _Bool isDefaultNotebookOverride; // @synthesize isDefaultNotebookOverride=_isDefaultNotebookOverride;
@property(nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(retain, nonatomic) EDAMSharedNotebook *sharedNotebook; // @synthesize sharedNotebook=_sharedNotebook;
@property(retain, nonatomic) EDAMLinkedNotebook *linkedNotebook; // @synthesize linkedNotebook=_linkedNotebook;
@property(retain, nonatomic) EDAMNotebook *notebook; // @synthesize notebook=_notebook;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool allowsWriting;
@property(readonly, nonatomic) _Bool isDefaultNotebook;
@property(readonly, nonatomic) _Bool isOwnedByUser;
@property(readonly, nonatomic) _Bool isBusinessNotebook;
@property(readonly, nonatomic) _Bool isOwnPublic;
@property(readonly, nonatomic) _Bool isJoinedPublic;
@property(readonly, nonatomic) _Bool isPublic;
- (_Bool)isLinked;
@property(readonly, nonatomic) _Bool isJoinedShared;
@property(readonly, nonatomic) _Bool isOwnShared;
- (id)guid;
@property(readonly, nonatomic) NSString *ownerDisplayName;
@property(readonly, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotebook:(id)arg1 linkedNotebook:(id)arg2 sharedNotebook:(id)arg3;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 withBusinessNotebook:(id)arg3;
- (id)initWithPublicNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithNotebook:(id)arg1;

@end
