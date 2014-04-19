//
//  MPWConnectToDefault.h
//  MPWTalk
//
//  Created by Marcel Weiher on 8/8/12.
//
//

#import <ObjectiveSmalltalk/MPWConnector.h>

@interface MPWConnectToDefault : MPWConnector
{
    id lhs,rhs;
}

@end


@interface NSObject(connecting)

-defaultComponentInstance;
+defaultComponentInstance;
-defaultInputPort;
-defaultOutputPort;

-(NSDictionary*)ports;

@end
