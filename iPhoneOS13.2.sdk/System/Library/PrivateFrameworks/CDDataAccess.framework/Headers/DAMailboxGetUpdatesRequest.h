//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CDDataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest
{
    int _maxSize;
}

@property(nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2;

@end

