//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSCache (TSPComponentManager)
- (void)tsp_cacheComponent:(id)arg1;
- (void)tsp_flushComponent:(id)arg1;
- (unsigned char)tsp_currentOperation;
- (id)tsp_currentComponent;
- (void)tsp_performOperation:(unsigned char)arg1 forComponent:(id)arg2 usingBlock:(id /* block */)arg3;
@end

