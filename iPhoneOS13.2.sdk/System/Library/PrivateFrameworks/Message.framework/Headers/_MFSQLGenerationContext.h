//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDSearchableIndex, EFMutableInt64Set, EFSQLPropertyMapper;

@interface _MFSQLGenerationContext : NSObject
{
    EDSearchableIndex *searchableIndex;
    EFMutableInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    _Bool usedBaseTable;
    _Bool haveLibraryIDCriterion;
    _Bool protectedDataAvailable;
}


@end

