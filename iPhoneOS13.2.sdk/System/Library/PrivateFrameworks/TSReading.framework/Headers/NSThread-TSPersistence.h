//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSThread (TSPersistence)
+ (void)tsp_performSynchronousOperationMarkingThreadWithKey:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(id /* block */)arg1;
+ (_Bool)tsp_hasReadFileAccess;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(id /* block */)arg1;
+ (_Bool)tsp_isArchiverThread;
@end
