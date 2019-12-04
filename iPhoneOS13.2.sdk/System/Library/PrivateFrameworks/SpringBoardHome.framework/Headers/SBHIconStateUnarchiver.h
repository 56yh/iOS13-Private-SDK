//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBHIconModel;

@interface SBHIconStateUnarchiver : NSObject
{
    _Bool _removesEmptyFolders;
    id _archive;
    SBHIconModel *_iconSource;
}

+ (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3 iconSource:(id)arg4;
@property(readonly, nonatomic) SBHIconModel *iconSource; // @synthesize iconSource=_iconSource;
@property(readonly, nonatomic) id archive; // @synthesize archive=_archive;
@property(nonatomic) _Bool removesEmptyFolders; // @synthesize removesEmptyFolders=_removesEmptyFolders;
- (id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 identifier:(id)arg3 context:(id)arg4 overflow:(id)arg5;
- (id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2;
- (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3;
- (Class)_folderClassForFolderType:(id)arg1 context:(id)arg2;
- (id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2;
- (id)_newFolderIconForFolder:(id)arg1;
- (id)_nodeFromRepresentation:(id)arg1 context:(id)arg2;
- (id)unarchive;
- (id)initWithArchive:(id)arg1 iconSource:(id)arg2;

@end

