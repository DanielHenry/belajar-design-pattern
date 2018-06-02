<?php

class Logger{
    private $list;

    private function __construct(){
        $this->list = [];
    }

    public static function getInstance(){
        static $instance;
        if (!isset($instance)){
            $instance = new Logger();
        }
        return $instance;
    }
    public function push($str = ''){
        array_push($this->list, $str);
    }
    public function getAll(){
        return $this->list;
    }
}

$firstlog = Logger::getInstance();
$firstlog->push('push 1 to firstlog');
$firstlog->push('push 2 to firstlog');

$secondlog = Logger::getInstance();
$secondlog->push('push 1 to secondlog');
$secondlog->push('push 2 to secondlog');

$logList = $firstlog->getAll();
foreach ($logList as $log){
    echo $log."\n";
}

?>