//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation
{
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

- (void)parseTableOfContentsOperationDidFinish:(id)arg1;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (id)initWithBook:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id *)arg2;

@end

